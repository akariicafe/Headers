@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    NSString *_path;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultProviderWithPaths:(id)a0;

- (id)initWithPath:(id)a0;
- (id)subject;
- (unsigned long long)numberOfWeeksPerRotation;
- (void)encodeWithCoder:(id)a0 guardedData:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)loadUsingGuardedData:(id)a0;
- (id)subjectWithProjectId:(int)a0;
- (id)anchorDate;
- (void)rotateSubject;
- (BOOL)save;
- (void).cxx_destruct;
- (id)nextRotationDate;
- (void)decodeWithCoder:(id)a0 guardedData:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)setNextRotationDate:(id)a0;
- (id)nextRotationDateAfter:(id)a0;

@end
