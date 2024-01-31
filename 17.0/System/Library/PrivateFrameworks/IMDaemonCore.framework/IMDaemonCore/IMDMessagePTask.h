@class NSString;

@interface IMDMessagePTask : NSObject

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) unsigned long long taskFlags;

- (void)dealloc;
- (id)initWithGUID:(id)a0;
- (void)compeletedTask:(unsigned long long)a0;
- (id)initWithStoreDictionary:(id)a0;
- (BOOL)needsProccesingFor:(unsigned long long)a0;
- (void)setTaskFlag:(unsigned long long)a0;

@end
