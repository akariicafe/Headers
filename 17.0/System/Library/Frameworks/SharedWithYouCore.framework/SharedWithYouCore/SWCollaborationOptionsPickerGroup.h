@class NSString;

@interface SWCollaborationOptionsPickerGroup : SWCollaborationOptionsGroup {
    BOOL _isUpdatingSelectionState;
}

@property (retain, nonatomic) NSString *selectedOptionIdentifier;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;

- (void)setOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_defaultSelectedOptionIdentifier;
- (id)initWithIdentifier:(id)a0 options:(id)a1;

@end
