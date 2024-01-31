@class NSData;

@interface UIAccessibilityHierarchyDecoder : NSObject

@property (retain, nonatomic) NSData *hierarchyData;

- (void).cxx_destruct;
- (id)decodeHierarchyWithContainer:(id)a0 error:(id *)a1;
- (id)initWithHierarchyData:(id)a0;

@end
