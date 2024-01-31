@class NSArray, BLSBacklightChangeEvent, BLSHPresentationDateSpecifier, NSString;

@interface BLSHPendingEnvironmentUpdateOperation : NSObject <BLSHPendingOperation>

@property (readonly) BLSBacklightChangeEvent *triggerEvent;
@property (readonly) NSArray *events;
@property (readonly) BLSHPresentationDateSpecifier *initialSpecifier;
@property (getter=didUpdateInitialState) BOOL updatedInitialState;
@property (readonly) long long type;
@property (getter=isStarted) BOOL started;
@property (getter=isCompleted) BOOL completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
