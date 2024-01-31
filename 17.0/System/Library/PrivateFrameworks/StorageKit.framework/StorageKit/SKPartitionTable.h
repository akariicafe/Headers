@class SKDisk, NSMutableArray;

@interface SKPartitionTable : NSObject

@property (retain) SKDisk *disk;
@property unsigned int sectorSize;
@property struct __MKMedia { } *mediaRef;
@property (retain, nonatomic) NSMutableArray *partitions;

+ (struct __MKMedia { } *)createMediaRefWithDisk:(id)a0 error:(id *)a1;
+ (unsigned int)getSectorSizeWithDisk:(id)a0;
+ (id)partitionIDFromDisk:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)allocateMediaRef:(id *)a0;
- (BOOL)fitToContainerSize:(unsigned long long)a0 error:(id *)a1;
- (void)flushMediaRef;
- (id)initWithDisk:(id)a0 error:(id *)a1;
- (BOOL)overwriteExistingMediaLayout:(id)a0 opts:(struct __CFDictionary { } *)a1 partitionScheme:(int)a2;
- (BOOL)overwriteExistingMediaLayout:(id)a0 opts:(struct __CFDictionary { } *)a1 partitionScheme:(int)a2 size:(unsigned long long)a3;
- (BOOL)overwritePartitionAt:(id)a0 partition:(id)a1 error:(id *)a2;
- (BOOL)resizePartitionID:(id)a0 size:(unsigned long long)a1 error:(id *)a2;
- (BOOL)wipeDiskWithError:(id *)a0;
- (BOOL)writeNewMediaLayout:(id)a0 partitionScheme:(unsigned long long)a1;
- (BOOL)writePartitionScheme:(unsigned long long)a0 error:(id *)a1;

@end
