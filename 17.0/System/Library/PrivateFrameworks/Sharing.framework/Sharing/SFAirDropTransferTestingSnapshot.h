@class SFAirDropTransfer, NSString, NSDictionary, NSSet, NSData;

@interface SFAirDropTransferTestingSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFAirDropTransfer *transfer;
@property (retain, nonatomic) NSDictionary *initialInfo;
@property (retain, nonatomic) NSString *nodeDisplayName;
@property (retain, nonatomic) NSString *nodeRealName;
@property (retain, nonatomic) NSString *nodeIdentifier;
@property (retain, nonatomic) NSSet *nodeContactIdentifiers;
@property (retain, nonatomic) NSString *nodeContactIdentifier;
@property (retain, nonatomic) NSData *transferFileIcon;
@property (retain, nonatomic) NSData *transferSmallFileIcon;

+ (id)loadSnapshotFromURL:(id)a0 error:(id *)a1;
+ (id)writeSnapshotForTransfer:(id)a0 initialInfo:(id)a1 name:(id)a2 error:(id *)a3;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTransfer:(id)a0 initialInfo:(id)a1;

@end
