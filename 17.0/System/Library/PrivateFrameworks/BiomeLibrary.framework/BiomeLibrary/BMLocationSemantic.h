@class NSUUID, NSString;

@interface BMLocationSemantic : BMEventBase <BMStoreData> {
    NSString *_raw_loiIdentifier;
}

@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) int userSpecificPlaceType;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) NSUUID *loiIdentifier;
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
- (id)initWithStarting:(id)a0 userSpecificPlaceType:(int)a1 placeType:(int)a2 loiIdentifier:(id)a3;

@end
