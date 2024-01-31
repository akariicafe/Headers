@class NSData, NSString, NSArray;

@interface BMUserActivityMetadataEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, copy, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *associatedBundleId;
@property (readonly, nonatomic) NSString *associatedURLString;
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) NSArray *topics;
@property (readonly, nonatomic) BOOL hasAssociatedImageRepresentation;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 userActivityData:(id)a1 title:(id)a2 activityType:(id)a3 associatedBundleId:(id)a4 associatedURLString:(id)a5 modeIdentifier:(id)a6 topics:(id)a7 hasAssociatedImageRepresentation:(BOOL)a8 uuid:(id)a9;
- (id)jsonDict;
- (id)json;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
