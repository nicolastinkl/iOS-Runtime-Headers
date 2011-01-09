/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBodyAutoFit, OADTextWarp;



@interface OADTextBodyProperties : OADProperties 
{
    OADTextBodyAutoFit *mAutoFit;
    OADTextWarp *mTextWarp;
    double mTopInset;
    double mLeftInset;
    double mBottomInset;
    double mRightInset;
    double mRotation;
    double mColumnSpacing;
    unsigned short mColumnCount;
    unsigned short mTextBodyId;
    unsigned char mTextAnchorType;
    unsigned char mVerticalType;
    unsigned char mWrapType;
    unsigned char mVerticalOverflowType;
    unsigned char mHorizontalOverflowType;
    unsigned int mRepectFirstLastParagraphSpacing : 1;
    unsigned int mIsUpright : 1;
    unsigned int mIsAnchorCenter : 1;
    unsigned int mIsLeftToRightColumns : 1;
    unsigned int mHasVerticalOverflowType : 1;
    unsigned int mHasHorizontalOverflowType : 1;
    unsigned int mHasTextBodyId : 1;
    unsigned int mHasVerticalType : 1;
    unsigned int mHasWrapType : 1;
    unsigned int mHasTextAnchorType : 1;
    unsigned int mHasIsAnchorCenter : 1;
    unsigned int mHasIsUpright : 1;
    unsigned int mHasRotation : 1;
    unsigned int mHasColumnCount : 1;
    unsigned int mHasColumnSpacing : 1;
    unsigned int mHasIsLeftToRightColumns : 1;
    unsigned int mHasRepectFirstLastParagraphSpacing : 1;
    unsigned int mHasTopInset : 1;
    unsigned int mHasLeftInset : 1;
    unsigned int mHasRightInset : 1;
    unsigned int mHasBottomInset : 1;
}

+ (id)defaultEscherWordArtProperties;
+ (id)defaultProperties;

- (BOOL)hasRespectLastFirstLineSpacing;
- (BOOL)respectLastFirstLineSpacing;
- (void)setRespectLastFirstLineSpacing:(BOOL)arg1;
- (void)setTopInset:(double)arg1;
- (void)setLeftInset:(double)arg1;
- (void)setBottomInset:(double)arg1;
- (void)setRightInset:(double)arg1;
- (BOOL)hasColumnCount;
- (BOOL)hasColumnSpacing;
- (double)columnSpacing;
- (void)setColumnSpacing:(double)arg1;
- (BOOL)hasIsLeftToRightColumns;
- (BOOL)isLeftToRightColumns;
- (void)setIsLeftToRightColumns:(BOOL)arg1;
- (BOOL)hasAutoFit;
- (id)autoFit;
- (void)setAutoFit:(id)arg1;
- (BOOL)hasVerticalType;
- (NSInteger)verticalType;
- (void)setVerticalType:(NSInteger)arg1;
- (BOOL)hasWrapType;
- (NSInteger)wrapType;
- (void)setWrapType:(NSInteger)arg1;
- (BOOL)hasVerticalOverflowType;
- (NSInteger)verticalOverflowType;
- (void)setVerticalOverflowType:(NSInteger)arg1;
- (BOOL)hasHorizontalOverflowType;
- (NSInteger)horizontalOverflowType;
- (void)setHorizontalOverflowType:(NSInteger)arg1;
- (BOOL)hasTextBodyId;
- (NSInteger)textBodyId;
- (void)setTextBodyId:(NSInteger)arg1;
- (BOOL)hasTextWarp;
- (id)textWarp;
- (void)setTextWarp:(id)arg1;
- (BOOL)hasIsAnchorCenter;
- (BOOL)isAnchorCenter;
- (void)setIsAnchorCenter:(BOOL)arg1;
- (BOOL)hasTextAnchorType;
- (void)setTextAnchorType:(NSInteger)arg1;
- (BOOL)hasIsUpright;
- (BOOL)isUpright;
- (void)setIsUpright:(BOOL)arg1;
- (BOOL)hasRotation;
- (id)initWithDefaults;
- (void)removeUnnecessaryOverrides;
- (BOOL)hasTopInset;
- (double)topInset;
- (BOOL)hasLeftInset;
- (double)leftInset;
- (BOOL)hasBottomInset;
- (double)bottomInset;
- (BOOL)hasRightInset;
- (double)rightInset;
- (NSInteger)textAnchorType;
- (void)setRotation:(double)arg1;
- (double)rotation;
- (NSInteger)columnCount;
- (void)setColumnCount:(NSInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)init;
- (void)dealloc;

@end