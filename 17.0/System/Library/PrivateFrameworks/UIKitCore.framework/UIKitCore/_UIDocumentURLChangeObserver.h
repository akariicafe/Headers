@class NSSet, NSString, NSURL, NSOperationQueue;

@interface _UIDocumentURLChangeObserver : NSObject <NSFilePresenter>

@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic, getter=isObserving) BOOL observing;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
