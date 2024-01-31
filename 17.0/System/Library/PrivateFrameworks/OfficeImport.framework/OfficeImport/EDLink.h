@class EDCollection;

@interface EDLink : NSObject {
    int mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(int)a0;

- (void)setType:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (int)type;
- (id)externalNames;

@end
