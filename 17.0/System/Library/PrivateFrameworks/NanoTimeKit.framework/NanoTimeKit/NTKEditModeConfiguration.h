@class NTKEditOption, NSMutableDictionary;

@interface NTKEditModeConfiguration : NSObject <NSSecureCoding> {
    NSMutableDictionary *_optionsBySlot;
    NTKEditOption *_nilSlotOption;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)JSONObjectRepresentationForFace:(id)a0;
- (id)JSONObjectRepresentation;
- (id)_alphabeticalSlots;
- (id)dailySnapshotKey;
- (id)editOptionForSlot:(id)a0;
- (void)enumerateSlotsWithBlock:(id /* block */)a0;
- (id)initWithJSONObjectRepresentation:(id)a0 device:(id)a1 editOptionFactory:(id /* block */)a2;
- (id)initWithJSONObjectRepresentation:(id)a0 editOptionClass:(Class)a1 forDevice:(id)a2;
- (void)setEditOption:(id)a0 forSlot:(id)a1;

@end
