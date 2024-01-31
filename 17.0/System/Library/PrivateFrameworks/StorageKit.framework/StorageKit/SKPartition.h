@class NSString, SKFilesystem;

@interface SKPartition : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) SKFilesystem *fs;

- (void).cxx_destruct;
- (id)buildWithScheme:(int)a0 sectorSize:(unsigned long long)a1;

@end
