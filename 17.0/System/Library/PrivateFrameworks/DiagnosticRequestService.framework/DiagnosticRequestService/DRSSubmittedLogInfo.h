@class NSString;

@interface DRSSubmittedLogInfo : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *sandboxExtension;
@property (readonly, nonatomic) BOOL transferOwnership;

+ (id)submittedLogInfosFromPaths:(id)a0 sandboxExtensions:(id)a1 transferOwnerships:(id)a2 successOut:(BOOL *)a3;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithPath:(const char *)a0 sandboxExtension:(const char *)a1 transferOwnership:(BOOL)a2;

@end
