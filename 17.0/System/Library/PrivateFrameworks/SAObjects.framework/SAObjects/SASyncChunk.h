@class NSString, NSArray, SASyncAppMetaData;

@interface SASyncChunk : SABaseClientBoundCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) SASyncAppMetaData *appMetaData;
@property (copy, nonatomic) NSString *intentSlotName;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *postGen;
@property (copy, nonatomic) NSString *preGen;
@property (copy, nonatomic) NSArray *toAdd;
@property (copy, nonatomic) NSArray *toRemove;
@property (copy, nonatomic) NSString *validity;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chunk;
+ (id)chunkWithDictionary:(id)a0 context:(id)a1;

@end
