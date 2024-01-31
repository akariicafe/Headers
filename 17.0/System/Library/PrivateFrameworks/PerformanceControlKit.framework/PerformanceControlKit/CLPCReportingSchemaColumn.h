@class NSNumber, NSString;

@interface CLPCReportingSchemaColumn : NSObject

@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long statID;
@property (nonatomic) unsigned long long metadataType;
@property (retain, nonatomic) NSNumber *valueID;
@property (retain, nonatomic) NSString *name;

- (id)init;
- (void).cxx_destruct;

@end
