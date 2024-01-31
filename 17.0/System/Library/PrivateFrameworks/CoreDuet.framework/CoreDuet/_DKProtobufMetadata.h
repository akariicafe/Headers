@class NSString, NSDictionary;

@interface _DKProtobufMetadata : NSObject <_DKProtobufConverting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (id)fromPBCodable:(id)a0;
+ (id)createFromData:(id)a0;

@end
