@class NSString, EDKeyedCollection;

@interface EDTableStyle : NSObject <NSCopying> {
    NSString *mName;
    EDKeyedCollection *mTableStyleElements;
}

+ (id)tableStyle;

- (id)init;
- (void)setName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tableStyleElements;

@end
