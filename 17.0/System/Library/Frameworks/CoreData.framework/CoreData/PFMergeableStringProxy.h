@class NSString, NSManagedObject, NSObject;
@protocol NSMergeableTransformableStringAttributeValue;

@interface PFMergeableStringProxy : NSObject <NSMergeableTransformableStringAttributeValue> {
    NSManagedObject *_container;
    NSString *_key;
    NSObject<NSMergeableTransformableStringAttributeValue> *_mergeableString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsMergeableTransformable;

- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (id)init;
- (void)dealloc;
- (void)setString:(id)a0;
- (void)appendString:(id)a0;
- (void)merge:(id)a0;
- (void)removeSubrange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)computedValue;
- (id)initWithContainer:(id)a0 key:(id)a1 mergeableString:(id)a2;
- (void)replaceSubrange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;

@end
