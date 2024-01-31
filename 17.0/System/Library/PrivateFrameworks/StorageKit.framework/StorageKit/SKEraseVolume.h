@class SKVolumeDescriptor, SKProgress, NSDictionary, NSString, SKDisk;

@interface SKEraseVolume : NSObject <SKValidateProtocol, SKEraseSubmitProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SKProgress *progress;
@property (retain, nonatomic) SKDisk *disk;
@property (retain, nonatomic) NSDictionary *diskRepresentation;
@property (retain, nonatomic) SKVolumeDescriptor *descriptor;
@property (nonatomic) BOOL forceUnmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eraseVolumeWithChildDisk:(id)a0 descriptor:(id)a1 error:(id *)a2;
+ (id)eraseVolumeWithChildDisk:(id)a0 error:(id *)a1;

- (id)validateWithError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)eraseProgressReportingWithCompletionBlock:(id /* block */)a0;
- (void)eraseWithCompletionBlock:(id /* block */)a0;
- (id)formattableFilesystems;
- (id)initWithChildDisk:(id)a0 descriptor:(id)a1 error:(id *)a2;

@end
