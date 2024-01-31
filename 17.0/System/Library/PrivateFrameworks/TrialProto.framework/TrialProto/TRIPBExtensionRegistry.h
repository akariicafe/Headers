@class NSMutableDictionary;

@interface TRIPBExtensionRegistry : NSObject <NSCopying> {
    NSMutableDictionary *mutableClassMap_;
}

- (id)init;
- (void)dealloc;
- (id)extensionForDescriptor:(id)a0 fieldNumber:(long long)a1;
- (void)addExtensions:(id)a0;
- (void)addExtension:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
