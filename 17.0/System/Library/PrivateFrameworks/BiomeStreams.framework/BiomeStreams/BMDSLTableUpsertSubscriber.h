@class NSString;

@interface BMDSLTableUpsertSubscriber : BMDSLSubscriber {
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *tableName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)bpsSubscriber;
- (id)initWithTableName:(id)a0 identifier:(id)a1;
- (id)initWithTableName:(id)a0 identifier:(id)a1 name:(id)a2 version:(unsigned int)a3;

@end
