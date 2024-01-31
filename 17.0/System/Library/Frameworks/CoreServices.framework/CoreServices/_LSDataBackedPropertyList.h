@class NSData, _LSPlistHint;

@interface _LSDataBackedPropertyList : _LSLazyPropertyList {
    NSData *_rawPlistData;
    _LSPlistHint *_plistHint;
    struct unfair_lock_mutex { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (BOOL)supportsSecureCoding;

- (void)prewarm;
- (BOOL)_getPropertyList:(id *)a0;
- (id)initWithPropertyListData:(id)a0;
- (id)uncheckedObjectsForKeys:(id)a0;
- (void)detach;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (void).cxx_destruct;
- (id)_plistHint;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
