@interface AFMemoryInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long virtualMemorySizeInBytes;
@property (readonly, nonatomic) int numberOfRegions;
@property (readonly, nonatomic) int pageSizeInBytes;
@property (readonly, nonatomic) unsigned long long residentMemorySizeInBytes;
@property (readonly, nonatomic) unsigned long long peakResidentMemorySizeInBytes;
@property (readonly, nonatomic) unsigned long long physicalMemoryFootprintInBytes;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithVirtualMemorySizeInBytes:(unsigned long long)a0 numberOfRegions:(int)a1 pageSizeInBytes:(int)a2 residentMemorySizeInBytes:(unsigned long long)a3 peakResidentMemorySizeInBytes:(unsigned long long)a4 physicalMemoryFootprintInBytes:(unsigned long long)a5;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
