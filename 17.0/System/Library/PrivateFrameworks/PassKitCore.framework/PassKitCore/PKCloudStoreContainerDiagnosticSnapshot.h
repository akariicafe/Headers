@class NSDictionary;

@interface PKCloudStoreContainerDiagnosticSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *recordIDs;
@property (readonly, nonatomic) NSDictionary *localRecordIDs;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordIDs:(id)a0 localRecordIDs:(id)a1;

@end
