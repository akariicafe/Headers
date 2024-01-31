@class NSSet, NSString;

@interface VOSScreenreaderMode : NSObject {
    NSString *_rawValue;
}

@property (class, readonly, nonatomic) VOSScreenreaderMode *Default;
@property (class, readonly, nonatomic) VOSScreenreaderMode *Handwriting;
@property (class, readonly, nonatomic) VOSScreenreaderMode *BrailleScreenInput;
@property (class, readonly, nonatomic) VOSScreenreaderMode *Invalid;
@property (class, readonly, nonatomic) NSSet *allModes;

@property (readonly, nonatomic) NSString *rawValue;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)modeWithStringValue:(id)a0;

- (id)_initWithRawValue:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
