@class NSString, SUInstallationConstraintObserver;

@interface _SUInstallationConstraintBlockObserverToken : NSObject <SUInvalidatable> {
    SUInstallationConstraintObserver *_observer;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
