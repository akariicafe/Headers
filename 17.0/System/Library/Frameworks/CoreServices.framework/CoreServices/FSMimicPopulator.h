@class FSMimic, FSNode;

@interface FSMimicPopulator : NSObject {
    FSNode *_node;
}

@property (readonly, nonatomic) FSMimic *mimic;

- (id)initWithNode:(id)a0;
- (void).cxx_destruct;
- (BOOL)populateHFSTypeAndCreatorWithError:(id *)a0;
- (void)populateHasChildNodeWithRelativePath:(id)a0;
- (BOOL)populateSimpleSelector:(SEL)a0 error:(id *)a1;
- (BOOL)populateValueForKey:(id)a0 error:(id *)a1;

@end
