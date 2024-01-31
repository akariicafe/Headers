@interface WMEnumProperty : CMProperty {
    unsigned long long wdValue;
}

- (id)description;
- (unsigned long long)value;
- (id)cssStringForName:(id)a0;
- (id)initWithEnum:(unsigned long long)a0;
- (id)mapCellTextVAlign;
- (id)mapJustification;
- (id)mapUnderline;
- (id)mapVerticalAlign;

@end
