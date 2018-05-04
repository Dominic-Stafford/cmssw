#ifndef DETECTOR_DESCRIPTION_DD_SINGLETON_H
#define DETECTOR_DESCRIPTION_DD_SINGLETON_H

#include <memory>

namespace cms {

  template< typename T, typename CONTEXT >
    class DDSingleton
  {
  public:
    T* operator->() { return m_instance; }
    const T* operator->() const { return m_instance; }
    T& operator*() { return *m_instance; }
    const T& operator*() const { return *m_instance; }
    
  protected:
    DDSingleton() {
      static bool static_init __attribute__(( unused )) = []()->bool {
	m_instance = std::make_shared<T>();
	return true;
      }();
    }

    DDSingleton( int ) {
      static bool static_init __attribute__(( unused )) = []()->bool {
	m_instance = CONTEXT::init();
	return true;
      }();
    }
    
  private:
    static std::shared_ptr<T> m_instance;
  };
}

template < typename T, typename CONTEXT >
  std::shared_ptr<T> cms::DDSingleton< T, CONTEXT >::m_instance;
  
#endif
