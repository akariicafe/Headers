@class NSString, CPLEngineLibrary, CPLEngineScope, NSURL, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface CPLBrokenScope : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastShownAlertDate;
}

@property (readonly, nonatomic) CPLEngineScope *engineScope;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (readonly, nonatomic) NSString *alternateRecoverDescription;
@property (readonly, nonatomic) NSString *brokenTitle;
@property (readonly, nonatomic) NSString *brokenMessage;
@property (readonly, nonatomic) NSString *alertTitle;
@property (readonly, nonatomic) NSString *alertMessage;
@property (readonly, nonatomic) NSString *readMoreButtonTitle;
@property (readonly, nonatomic) NSURL *readMoreURL;
@property (readonly, nonatomic) NSString *radarTitle;
@property (readonly, nonatomic) NSString *radarDescription;
@property (readonly, nonatomic) NSString *createRadarButtonTitle;
@property (readonly, nonatomic) NSURL *createRadarURL;
@property (readonly, nonatomic) BOOL shouldShowAlertToUser;
@property (readonly, nonatomic) BOOL hasEngineRecoveryMechanism;
@property (readonly, nonatomic) NSString *recoverButtonTitle;
@property (readonly, nonatomic) NSString *internalRecoveryInstructions;

- (void).cxx_destruct;
- (void)showAlertToUser;
- (void)_showAlertWithMessage:(id)a0 readMoreURL:(id)a1 createRadarURL:(id)a2 showsRecoverButton:(BOOL)a3;
- (id)initWithEngineScope:(id)a0 engineLibrary:(id)a1;
- (void)recoverUsingEngineWithCompletionHandler:(id /* block */)a0;

@end
