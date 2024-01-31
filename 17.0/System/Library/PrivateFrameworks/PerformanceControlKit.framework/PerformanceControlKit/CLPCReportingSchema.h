@class NSArray, NSMutableArray;

@interface CLPCReportingSchema : NSObject {
    NSMutableArray *stagedColumns;
}

@property (nonatomic) unsigned long long schemaID;
@property (readonly, nonatomic) NSArray *columns;

- (id)init;
- (void).cxx_destruct;

@end
