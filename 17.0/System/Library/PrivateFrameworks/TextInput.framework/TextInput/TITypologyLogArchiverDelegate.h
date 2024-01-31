@class NSString, NSMutableSet;

@interface TITypologyLogArchiverDelegate : NSObject <NSKeyedArchiverDelegate>

@property (readonly, nonatomic) NSMutableSet *objects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)archiver:(id)a0 willEncodeObject:(id)a1;

@end
