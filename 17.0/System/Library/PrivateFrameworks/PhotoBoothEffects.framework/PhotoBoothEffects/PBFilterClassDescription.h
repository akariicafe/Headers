@class NSDictionary, NSArray;

@interface PBFilterClassDescription : NSObject {
    NSDictionary *_attributes;
    NSArray *_inputKeys;
}

+ (id)classDescriptionForClass:(Class)a0;

- (id)inputKeys;
- (id)attributes;
- (id)initWithClass:(Class)a0;

@end
