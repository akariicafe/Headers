@class NSString;

@interface DRClientLog : NSObject

@property (readonly, nonatomic) NSString *sandboxExtension;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL transferOwnership;

+ (id)sandboxExtensionForLog:(id)a0 transferOwnership:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 transferOwnership:(BOOL)a1 errorOut:(id *)a2;
- (id)_checkPath;

@end
