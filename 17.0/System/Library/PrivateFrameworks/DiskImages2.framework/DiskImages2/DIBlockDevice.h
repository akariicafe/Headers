@class NSString;

@interface DIBlockDevice : DIIOObject

@property (readonly) BOOL diskImageDevice;
@property (readonly, copy) NSString *mediumType;

+ (id)copyUnmatchedDiskImageWithRegEntryID:(unsigned long long)a0 error:(id *)a1;

- (id)copyIOMediaWithError:(id *)a0;
- (id)copyRootBlockDeviceWithError:(id *)a0;

@end
