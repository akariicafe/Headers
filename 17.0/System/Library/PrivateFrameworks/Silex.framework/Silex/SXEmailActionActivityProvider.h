@class NSString;
@protocol SXMailPresenter;

@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider>

@property (readonly, nonatomic) id<SXMailPresenter> mailPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
