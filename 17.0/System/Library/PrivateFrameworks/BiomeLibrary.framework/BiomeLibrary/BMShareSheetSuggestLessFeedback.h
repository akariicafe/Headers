@class NSString;

@interface BMShareSheetSuggestLessFeedback : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) NSString *derivedIntentIdentifier;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *contactID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleID:(id)a0 conversationIdentifier:(id)a1 derivedIntentIdentifier:(id)a2 handle:(id)a3 contactID:(id)a4;

@end
