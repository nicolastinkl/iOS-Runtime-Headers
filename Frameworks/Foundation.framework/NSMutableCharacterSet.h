/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying>
{
}

+ (id)characterSetWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
+ (id)controlCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)illegalCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)newlineCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)letterCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)symbolCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)uppercaseLetterCharacterSet;

- (void)removeCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)addCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (BOOL)isMutable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (void)addCharactersInString:(id)arg1;
- (void)invert;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end