@class NSArray, NSString, NSDate;

@interface BMMessagesMediaRendered : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSArray *mediaAttributes;
@property (readonly, nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL hasIsOnScreen;
@property (readonly, nonatomic) BOOL isFirstView;
@property (nonatomic) BOOL hasIsFirstView;
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
- (id)initWithAbsoluteTimestamp:(id)a0 mediaAttributes:(id)a1 isOnScreen:(id)a2 isFirstView:(id)a3;
- (id)_mediaAttributesJSONArray;

@end
