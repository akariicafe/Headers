@class NSString;
@protocol FPXEnumeratorObserver;

@interface WrappedFPXEnumeratorObserverProxy : NSObject <FPXEnumeratorObserver> {
    id<FPXEnumeratorObserver> _target;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
