#include "JetMETCorrections/FFTJetModules/plugins/FFTJetCorrectionESProducer.h"

//
// define this as a plug-in
//
typedef FFTJetCorrectionESProducer<fftcorrtypes::BasicJetSys> FFTBasicJetSysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::GenJetSys> FFTGenJetSysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::CaloJetSys> FFTCaloJetSysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::PFJetSys> FFTPFJetSysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::TrackJetSys> FFTTrackJetSysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::JPTJetSys> FFTJPTJetSysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::PFCHS0Sys> FFTPFCHS0SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::PFCHS1Sys> FFTPFCHS1SysCorrectionESProducer;
typedef FFTJetCorrectionESProducer<fftcorrtypes::PFCHS2Sys> FFTPFCHS2SysCorrectionESProducer;

DEFINE_FWK_EVENTSETUP_MODULE(FFTBasicJetSysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTGenJetSysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTCaloJetSysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTPFJetSysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTTrackJetSysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTJPTJetSysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTPFCHS0SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTPFCHS1SysCorrectionESProducer);
DEFINE_FWK_EVENTSETUP_MODULE(FFTPFCHS2SysCorrectionESProducer);
