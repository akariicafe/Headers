@class NSDictionary;

@interface TSKChangeRecord : NSObject

@property (readonly, nonatomic) unsigned int kind;
@property (readonly, nonatomic) id details;
@property (readonly, nonatomic) NSDictionary *detailsAsDictionary;
@property (readonly, nonatomic) BOOL allowedInCommit;

+ (id)changeRecordWithKind:(unsigned int)a0 details:(id)a1;

- (void).cxx_destruct;
- (id)initWithKind:(unsigned int)a0 details:(id)a1;

@end
