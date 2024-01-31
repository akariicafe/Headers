@class NSString, NSArray, NSData, NSDate;

@interface BMMessagesCommunicationSafetyResult : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *childID;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) int eventDirection;
@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) int contentType;
@property (readonly, nonatomic) NSArray *contactHandles;
@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSString *sourceBundleID;
@property (readonly, nonatomic) NSString *senderHandle;
@property (readonly, nonatomic) NSString *contentURL;
@property (readonly, nonatomic) NSString *conversationURL;
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
- (id)_contactHandlesJSONArray;
- (id)initWithAbsoluteTimestamp:(id)a0 childID:(id)a1 deviceID:(id)a2 eventDirection:(int)a3 eventType:(int)a4 contentType:(int)a5 contactHandles:(id)a6 contentID:(id)a7 conversationID:(id)a8 imageData:(id)a9 sourceBundleID:(id)a10 senderHandle:(id)a11 contentURL:(id)a12 conversationURL:(id)a13;

@end
