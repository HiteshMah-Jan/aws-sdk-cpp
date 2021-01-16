﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>This is used in a Lifecycle Rule Filter to apply a logical AND to two or more
   * predicates. The Lifecycle Rule will apply to any object matching all of the
   * predicates configured inside the And operator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/LifecycleRuleAndOperator">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API LifecycleRuleAndOperator
  {
  public:
    LifecycleRuleAndOperator();
    LifecycleRuleAndOperator(const Aws::Utils::Xml::XmlNode& xmlNode);
    LifecycleRuleAndOperator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     */
    inline LifecycleRuleAndOperator& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     */
    inline LifecycleRuleAndOperator& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>Prefix identifying one or more objects to which the rule applies.</p>
     */
    inline LifecycleRuleAndOperator& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>All of these tags must exist in the object's tag set in order for the rule to
     * apply.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>All of these tags must exist in the object's tag set in order for the rule to
     * apply.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>All of these tags must exist in the object's tag set in order for the rule to
     * apply.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>All of these tags must exist in the object's tag set in order for the rule to
     * apply.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>All of these tags must exist in the object's tag set in order for the rule to
     * apply.</p>
     */
    inline LifecycleRuleAndOperator& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>All of these tags must exist in the object's tag set in order for the rule to
     * apply.</p>
     */
    inline LifecycleRuleAndOperator& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>All of these tags must exist in the object's tag set in order for the rule to
     * apply.</p>
     */
    inline LifecycleRuleAndOperator& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>All of these tags must exist in the object's tag set in order for the rule to
     * apply.</p>
     */
    inline LifecycleRuleAndOperator& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
