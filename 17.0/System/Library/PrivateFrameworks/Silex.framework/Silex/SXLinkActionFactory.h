@class NSString;
@protocol SXURLActionFactory;

@interface SXLinkActionFactory : NSObject <SXActionFactory>

@property (readonly, nonatomic) id<SXURLActionFactory> URLActionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
