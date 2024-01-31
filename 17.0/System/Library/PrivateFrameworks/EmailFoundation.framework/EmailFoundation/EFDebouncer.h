@class NSString, EFObservable;
@protocol EFCancelable, EFObserver;

@interface EFDebouncer : NSObject <EFCancelable>

@property (readonly, nonatomic) EFObservable<EFObserver> *observable;
@property (readonly, nonatomic) id<EFCancelable> cancelable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

@end
