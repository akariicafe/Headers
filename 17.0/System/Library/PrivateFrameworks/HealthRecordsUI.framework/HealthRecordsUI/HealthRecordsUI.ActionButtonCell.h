@class NSString;

@interface HealthRecordsUI.ActionButtonCell : UITableViewCell {
    void /* unknown type, empty encoding */ titleLabelLeadingConstraint;
    void /* unknown type, empty encoding */ iconView;
    void /* unknown type, empty encoding */ nonBusyTitleLabelColor;
}

@property (class, nonatomic, readonly) NSString *defaultReuseIdentifier;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ icon;
@property (nonatomic) void /* unknown type, empty encoding */ actionEnabled;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)setBusy:(BOOL)a0;

@end
