@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {
    TSUBasicProgressStorage *_storage;
}

@property double value;
@property (getter=isIndeterminate) BOOL indeterminate;

- (void).cxx_destruct;
- (double)maxValue;
- (id)initWithMaxValue:(double)a0;
- (id)initForSubclass;

@end
