@class NSData, NSString;

@interface THThreadNetworkCredentialsDataSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *dataSetArray;
@property (copy, nonatomic) NSString *userInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDataSetArray:(id)a0 userInfo:(id)a1;

@end
