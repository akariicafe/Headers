@class NSString, NSArray, NSURL, NSDictionary;

@interface WFPodcastShowObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *storeId;
@property (readonly, nonatomic) NSURL *feedURL;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)childrenJSONTransformer;

- (void).cxx_destruct;

@end
