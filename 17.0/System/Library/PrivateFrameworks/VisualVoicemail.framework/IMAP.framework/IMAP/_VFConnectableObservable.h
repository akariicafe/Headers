@class NSString, NSLock, VFCancelationToken;
@protocol VFObserver, VFObservable;

@interface _VFConnectableObservable : VFObservable <VFConnectableObservable> {
    id<VFObservable> _observable;
    id<VFObservable, VFObserver> _subject;
    NSLock *_lock;
    VFCancelationToken *_cancelable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_disconnect;
- (id)connect;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservable:(id)a0 subject:(id)a1;

@end
