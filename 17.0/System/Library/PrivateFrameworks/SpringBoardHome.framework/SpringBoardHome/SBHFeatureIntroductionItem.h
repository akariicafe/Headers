@class NSString;

@interface SBHFeatureIntroductionItem : NSObject <SBHFeatureIntroductionProviding>

@property (readonly, nonatomic) NSString *featureIntroductionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
