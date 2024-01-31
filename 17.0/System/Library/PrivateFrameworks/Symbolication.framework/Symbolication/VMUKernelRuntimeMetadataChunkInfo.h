@class VMUClassInfo;

@interface VMUKernelRuntimeMetadataChunkInfo : NSObject {
    BOOL isMetaclass;
    unsigned int type;
    VMUClassInfo *owningClassInfo;
}

- (void).cxx_destruct;

@end
