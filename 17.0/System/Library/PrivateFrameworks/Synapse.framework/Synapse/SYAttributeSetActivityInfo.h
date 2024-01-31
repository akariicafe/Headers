@class NSString, NSURL, CSSearchableItemAttributeSet;

@interface SYAttributeSetActivityInfo : NSObject <SYUserActivityInfo>

@property (readonly, nonatomic) CSSearchableItemAttributeSet *attributeSet;
@property (readonly, copy) NSString *activityType;
@property (readonly, copy) NSURL *webpageURL;
@property (readonly, copy) NSURL *canonicalURL;
@property (readonly, copy) NSString *targetContentIdentifier;
@property (readonly, copy) NSString *persistentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAttributeSet:(id)a0;

@end
